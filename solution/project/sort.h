#pragma once

namespace sort
{
	// swap two elemets
	void swap(int* a, int size, int index1, int index2);

	// one step of bubble sort
	void iteration(int* a, int size);

	// bubble sort
	void bubble(int* a, int size);
}
// end of sort namespace