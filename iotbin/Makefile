all:

include ../kaldi.mk

LDFLAGS += $(CUDA_LDFLAGS)
LDLIBS += $(CUDA_LDLIBS)
CXXFLAGS += -Wno-invalid-offsetof

TESTFILES = 

BINFILES = fst-copy iot

ADDLIBS = ../iot/kaldi-iot.a \
          ../cudamatrix/kaldi-cudamatrix.a \
          ../nnet2/kaldi-nnet2.a \
          ../decoder/kaldi-decoder.a \
          ../hmm/kaldi-hmm.a \
          ../transform/kaldi-transform.a \
          ../tree/kaldi-tree.a \
          ../util/kaldi-util.a \
          ../thread/kaldi-thread.a \
          ../matrix/kaldi-matrix.a \
          ../base/kaldi-base.a 

include ../makefiles/default_rules.mk
