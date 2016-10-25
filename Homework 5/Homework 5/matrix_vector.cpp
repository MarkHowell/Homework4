#include <string>
#include <iostream>

struct Vec3 {
	double vectorList[3];
	Vec3 read_vec() {
		std::cin >> vectorList[0] >> vectorList[1] >> vectorList[2];
	};
	void print(Vec3 v) {
		std::cout << v.vectorList[0] << " " << v.vectorList[1] << " " << v.vectorList[2] << std::endl;
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
	double length(Vec3 u) {};
	Vec3 row(Mat3 m, int i) {};
	Vec3 col(Mat3 m, int i) {};
	Vec3 multiply(Mat3 m, Vec3 u) {};
};

struct Mat3 {
	double matrixList[9];
	Mat3 read_mat() {
		for (int i = 0; i < 3; ++i)
		{
			for (int j = 0; j < 3; ++j)
			{
				//			std::cin >> matrixContents[i, j];
			}
		}
	};
		void print(Mat3 m) {
			std::cout << "[ ";
			for (int i = 0; i < 9; ++i)
			{
				std::cout << matrixList[i];
				if (i < 9)
					std::cout << ", ";
			}
			std::cout << " ]" << std::endl;
	};
	Mat3 transpose(Mat3 m) {};
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
		std::string inputType;
		std::cin >> inputType;
		if (inputType == "V")
		{
			Vec3 vector1;
			Vec3 vector2;
			vector1.read_vec();
			vector2.read_vec();

		}
		if (inputType == "M")
		{
			Mat3 matrix1;
			Mat3 matrix2;
			matrix1.read_mat();
			matrix2.read_mat();

		}

	}

	return 0;
}