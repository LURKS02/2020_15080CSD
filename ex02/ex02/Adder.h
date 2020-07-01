#ifndef ADDER_H_INCLUDED
#define ADDER_H_INCLUDED

class Adder {
	int op1, op2;
public:
	Adder(int a, int b);
	int process();
};

#endif