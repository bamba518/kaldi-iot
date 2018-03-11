all:

include ../kaldi.mk

LDFLAGS += $(CUDA_LDFLAGS)
LDLIBS += $(CUDA_LDLIBS)
CXXFLAGS += -Wno-invalid-offsetof

TESTFILES = 

BINFILES = fst-copy iot

#ADDLIBS = ../iot/kaldi-iot.a \
#	  ../online2/kaldi-online2.a \
#          ../cudamatrix/kaldi-cudamatrix.a \
#          ../nnet2/kaldi-nnet2.a \
#          ../decoder/kaldi-decoder.a \
#          ../hmm/kaldi-hmm.a \
#          ../transform/kaldi-transform.a \
#          ../tree/kaldi-tree.a \
#          ../util/kaldi-util.a \
#          ../thread/kaldi-thread.a \
#          ../matrix/kaldi-matrix.a \
#          ../base/kaldi-base.a 

ADDLIBS = ../iot/kaldi-iot.a \
          ../online2/kaldi-online2.a ../online/kaldi-online.a ../ivector/kaldi-ivector.a \
          ../nnet3/kaldi-nnet3.a ../chain/kaldi-chain.a ../nnet2/kaldi-nnet2.a \
          ../cudamatrix/kaldi-cudamatrix.a ../decoder/kaldi-decoder.a \
          ../lat/kaldi-lat.a ../fstext/kaldi-fstext.a ../hmm/kaldi-hmm.a \
          ../feat/kaldi-feat.a ../transform/kaldi-transform.a \
          ../gmm/kaldi-gmm.a ../tree/kaldi-tree.a ../util/kaldi-util.a \
          ../matrix/kaldi-matrix.a \
          ../base/kaldi-base.a 

include ../makefiles/default_rules.mk
