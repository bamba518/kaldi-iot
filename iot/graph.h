#ifndef KALDI_IOT_GRAPH_H
#define KALDI_IOT_GRAPH_H

#include "base/kaldi-common.h"

#include "iot/list.h"
#include "iot/common.h"

namespace kaldi {
namespace iot {

struct Node;

struct Arc {
  Link  graph_arcs_link;
  Link  iarcs_link;
  Link  oarcs_link;

  size_t id;
  std::string label;

  Node *src;
  Node *dst;
  int32 ilabel;
  int32 olabel;
  float32 weight;
  void *hook;  // no ownership

  Arc() :
    graph_arcs_link(),
    iarcs_link(),
    oarcs_link(),
    id(-1),
    label(""),
    src(NULL),
    dst(NULL),
    ilabel(-1),
    olabel(-1),
    weight(0.0),
    hook(NULL)
  { }

  ~Arc() { }
};

struct Node {
  Link  graph_nodes_link;

  size_t id;
  std::string label;
  
  List  iarcs;
  List  oarcs;
  void *hook;  // no ownership

  Node() :
    graph_nodes_link(),
    id(-1),
    label(""),
    iarcs(offsetof(Arc, iarcs_link)),
    oarcs(offsetof(Arc, oarcs_link)),
    hook(NULL)
  { }

  ~Node() { }
};

class Graph {
public:
  Graph();
  ~Graph();

  size_t NumNodes();
  size_t NumArcs();
  Node*  AddNode();
  int    DelNode(Node *node);
  Arc*   AddArc(Node *src, Node *dst);
  int    DelArc(Arc *arc);

  
  int    MarkNodeId();
  int    WriteDot(FILE *fp);
  

private:
  List nodes_;
  List arcs_;
};

} // namespace iot
} // namespace kaldi
#endif
