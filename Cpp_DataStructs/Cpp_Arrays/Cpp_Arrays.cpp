#include <iostream>

using namespace std;

int main() {

	cout << "A demonstration of the various ways arrays can be utilized and made in Cpp:" << endl;
	
	// Dimensions
	{
		int one_dim_array[1]; 		// Single 1D coordinate [0]
		int two_dim_array[2][2];	// two 2D coordinates ([1,2], [1,2]]) 
		int three_dim_array[3][3][3]; // three arrays of 3 pairs of  3D coordinates/paramaters [ [[x,y,z], [a,b,c], [1,2,3]], [[x,y,z], [a,b,c], [1,2,3]],  [[x,y,z] [a,b,c], [1,2,3]] ]i
		int position[10][1][3]; // An array with 1 element that has 1 subelement that is 3 elements long[ [x,y,z] ]
		// [number of elements][length of element][depth of elements]
		// int array[1][2][3] => [[[1,2,3],[1,2,3]]] 
		// [length of array 1] [length of array2]....[length of array N]
		/* Like a descending steps, but odd number position of array is length of a step, and even is steepness
		 *[1][2][1][3]
		 *_
		 * |
		 * |_ 
		 *   |
		 *   |	
		 *   |
		 * /
	}
	// Bit Sets
	{}
	// Ordered
	{}
	// Rootish / Gauss sum trick
	{}
	// Pointers and Arrays
	{}
	// Vectors and Dynamic Arrays
	{}
	// Uses
	{}
	return 0;
}
