import os, sys

words = []
phones = []
for l in open(sys.argv[1], 'r'):
	cols = l.strip().split()
	word = cols[0]
	pron = cols[1:]
	if word not in words:
		words.append(word)
	for p in pron:
		if p not in phones:
			phones.append(p)

words.sort()
wi = 0;
fo = open('words.txt', 'w+')
for w in words:
	fo.write('{}\t{}\n'.format(w, wi))
	wi += 1
fo.close()

phones.sort()
pi = 0;
fo = open('phones.txt', 'w+')
for p in phones:
	fo.write('{}\t{}\n'.format(p, pi))
	pi += 1
fo.close()
