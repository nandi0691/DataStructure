#ifndef DIAG_MATRIX
#define DIAG_MATRIX

class DiagonalMatrix
{
	private:
		int n;
		int * matrix;
	public:
		DiagonalMatrix();
		DiagonalMatrix(int n);
		~DiagonalMatrix();
		void set(int,int);
		int get(int);
		void print();

};
#endif


