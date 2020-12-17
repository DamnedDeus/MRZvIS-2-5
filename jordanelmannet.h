/**
 *    �����: ��������� ��������
 */
#pragma once

#include <iostream>
#include <cmath>
#include "armadillo-9.800.3\include\armadillo"

/**
 *    Armadillo - ���������� �������� �������
 *    ������: Dr Ryan Curtin
 *            Dr Conrad Sanderson
 */

using namespace std;
using namespace arma;

#define ALPHA 0.00001
#define E_BASE 0.0001
#define ITERS 1000000

class JordanElmanNet
{
public:
	JordanElmanNet();
	void StartLearning();
	void GeneratePredictedSequence();

private:

	vector<double> sequence;    //�������� ������������������
	vector<double> resSequence;    //�������� ������������������
	vector<double> expSequence;    //��������� �������� ������������������
	int k;  //����������� ��������� ������������������
	int p;  //���������� �������� � ������� �������� - ������ ����
	int m;  //���������� ������� ��� ���������� �������� �������� ����
	double e; //����������� ���������� ������
	double alfa; //����������� �����
	int N; //������������ ���������� ����� ��������
	int r; //���������� ��������������� ���������

	vec input;   //������� ������ (p)
	vec hidden;   //�������� ������ �� �������� ���� (m)
	double output;  //�������� ������ �� ��������� ���� (1)
	vec context_hidden;   //����������� ���� ��� �������� ���� (m)
	double context_output;          //����������� ���� ��� ��������� ���� (1)
	mat X;  //������� �������� m x p
	mat W;  //������� ����� W �� ������� ���� p x m
	mat Wch_h;  //������� ����� ����� ����������� � ����������� ���������� �������� � ������� ����� m x m
	mat W_; //������� ����� W_ �� �������� ���� m x 1
	mat Wco_h; //������� ����� ����� ����������� � ���������� ��������� ��������� � ������� ����� 1 x m
	vec T;  //��������� �������� ��� �������� ����
	double T_;  //��������� �������� ��� ��������� ����

	vector<double> expValues;   //��������, ������� ���������� �������� ��� �������� ��� ������� �������� �������
	void EnterInputParameters();
	void ShowInputParameters();
	bool CheckInputParameters();
	void PrintSequence();
	void CreateMatrixes();
	double GetRandom();
	double ActFunc(double x);
	double DerOfActFunc(double x);
	void DirectErrorProp();
	void BackErrorProp(double val);
	vector<double> CalcFibonacciSeries(int num);
	vector<double> CalcFactorialFunction(int num);
	vector<double> CalcPeriodicFunction(int num);
	vector<double> CalcPowerFunction(int num);
	vector<double> CalcSequenceOfNaturalNumbers(int num);
};
#pragma once
