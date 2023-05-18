#ifndef MATRIX_H
#define MATRIX_H

#include <vector>

namespace cs_linear
{
	template <typename T>
	class Matrix
	{
		public:
			// Constructor, Copy Constructor, Copy Assignment, Destructor
			Matrix(unsigned _rows, unsigned _cols, const T& _initial);
			Matrix(const Matrix<T>& rhs);
			Matrix<T>& operator=(const Matrix<T>& rhs);
			virtual ~Matrix();                                                                                                                                                          
			
			// Matrix operations                                                                                                                                                                                               
			Matrix<T> operator+(const Matrix<T>& rhs);
			Matrix<T>& operator+=(const Matrix<T>& rhs);
			Matrix<T> operator-(const Matrix<T>& rhs);
			Matrix<T>& operator-=(const Matrix<T>& rhs);
			Matrix<T> operator*(const Matrix<T>& rhs);
			Matrix<T>& operator*=(const Matrix<T>& rhs);
			Matrix<T> transpose();

			// Matrix/scalar operations                                                                                                                                                                                                     
			Matrix<T> operator+(const T& rhs);
			Matrix<T> operator-(const T& rhs);
			Matrix<T> operator*(const T& rhs);
			Matrix<T> operator/(const T& rhs);

			// Matrix/vector operations                                                                                                                                                                                                     
			std::vector<T> operator*(const std::vector<T>& rhs);
			std::vector<T> diag_vec();

			// Access the individual elements                                                                                                                                                                                               
			T& operator()(const unsigned& row, const unsigned& col);
			const T& operator()(const unsigned& row, const unsigned& col) const;

			// Access the row and column sizes                                                                                                                                                                                              
			unsigned get_rows() const;
			unsigned get_cols() const;

		private:
			std::vector<T> mat;
			unsigned rows;
			unsigned cols;
	};

}

#include "Matrix.cpp"

#endif
