#pragma once
#include "sort.h"

//選択ソート
class SelectionSort : public Sort
{
public:
	virtual void Exec(int* array, int size)override;
};