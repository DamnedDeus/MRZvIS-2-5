#include <iostream>
#include "jordanelmannet.h"

void main()
{
	JordanElmanNet net;
	net.StartLearning();
	net.GeneratePredictedSequence();
	system("pause");
	return;
}