
all:

include ../kaldi.mk

CXXFLAGS += -Wno-invalid-offsetof

TESTFILES = memory-pool-test link-test list-test phone-set-test vocab-test lexicon-test word-loop-test

OBJFILES = common.o memory-pool.o link.o list.o graph.o phone-set.o vocab.o lexicon.o word-loop.o wfst.o dec-core.o

LIBNAME = kaldi-iot

ADDLIBS = ../base/kaldi-base.a 

include ../makefiles/default_rules.mk

