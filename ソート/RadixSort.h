#pragma once
#include "sort.h"

//��\�[�g
class RadixSort : public Sort
{
public:
	virtual void Exec(int* array, int size) override;
};
