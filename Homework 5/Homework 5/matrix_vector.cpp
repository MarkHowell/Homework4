#include <string>
#include <iostream>

struct Vec3 {
	double vectorList[3];
	Vec3 read_vec() {
		std::cin >> vectorList[0] >> vectorList[1] >> vectorList[2];
	};
	void print(Vec3 v) {
		std::cout << "(" << v.vectorList[0] << ", " << v.vectorList[1] << ", " << v.vectorList[2] << ")" << std::endl;
	};
	Vec3 add(Vec3 u, Vec3 v) {
		Vec3 outputVector;
		for (int i = 0; i < 3; ++i)
			outputVector.vectorList[i] = u.vectorList[i] + v.vectorList[i];
		return outputVector;
	};
	double dot(Vec3 u, Vec3 v) {
		Vec3 outputVector;
		for (int i = 0; i < 3; ++i)
			outputVector.vectorList[i] = u.vectorList[i] * v.vectorList[i];
	};
	double length(Vec3 u) {
		return sqrt(vectorList[0] * vectorList[0] + vectorList[1] * vectorList[1] + vectorList[2] * vectorList[2]);
	};
	Vec3 row(Mat3 m, int i) {
		Vec3 outputVector;
		for (int j = 0; j < 3; ++j)
			outputVector.vectorList[j] = m.matrixList[3 * i + j];
		return outputVector;
	};
	Vec3 col(Mat3 m, int i) {
		Vec3 outputVector;
		for (int j = 0; j < 3; ++j)
			outputVector.vectorList[j] = m.matrixList[3 * j + i];
		return outputVector;
	};
	Vec3 multiply(Mat3 m, Vec3 u) {
		Vec3 outputVector;
		for (int i = 0; i < 3; ++i)
		{
			outputVector.vectorList[i] = m.matrixList[3 * i] * u.vectorList[0] + m.matrixList[3 * i + 1] * u.vectorList[1] + m.matrixList[3 * i + 2] * u.vectorList[2];
		}
		return outputVector;
	};
};

struct Mat3 {
	double matrixList[9];
	Mat3 read_mat() {
		Mat3 outputMatrix;
		for (int i = 0; i < 9; ++i)
		{

			std::cin >> outputMatrix.matrixList[i];
		}
		return  outputMatrix;
	};
		void print(Mat3 m) {
			std::cout << "[ ";
			for (int i = 0; i < 9; ++i)
			{
				std::cout << m.matrixList[i];
				if (i < 9)
					std::cout << ", ";
			}
			std::cout << " ]" << std::endl;
	};

	Mat3 transpose(Mat3 m) {
		Mat3 outputMatrix;
		for (int i = 0; i < 3; ++i)
		{
			for (int j = 0; j < 3; ++j)
				outputMatrix.matrixList[j + 3 * i] = m.matrixList[i + 3 * j];
		}
		return outputMatrix;
	};

	Mat3 multiply(Mat3 m1, Mat3 m2) {};
};

int main()
{

	// Read in first line of input and extract number of tests
	int numOfTests;
	std::cin >> numOfTests;

	// Loop through number of tests
	for (int i = 0; i < numOfTests; ++i)
	{

		std::string currentOperation;
		std::cin >> currentOperation;
		

		if (currentOperation == "add") {

			std::string inputType;
			std::cin >> inputType;
			Vec3 vector1;
			Vec3 vector2;

			if(inputType == "V")
			vector1.read_vec();
			
			std::string secondType;
			std::cin >> secondType;
			if(secondType == "V")
			vector2.read_vec();
			else;
			

		}
		
		
			Mat3 matrix1;
			Mat3 matrix2;
			matrix1.read_mat();
			matrix2.read_mat();


	}

	return 0;
}
