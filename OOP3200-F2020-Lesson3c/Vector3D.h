#pragma once
#ifndef __VECTOR3D__
#define __VECTOR3D__

#include <iostream>
#include <string>
class Vector3D
{
public:
	Vector3D(float x = 0.0f, float y = 0.0f, float z = 0.0f);
	~Vector3D();

	//Accessors
	float GetX() const;
	float GetY() const;
	float GetZ() const;

	//Mutators
	void SetX(const float x);
	void SetY(const float y);
	void SetZ(const float z);

	std::string ToString();

private:
	float m_x;
	float m_y;
	float m_z;
};
#endif
