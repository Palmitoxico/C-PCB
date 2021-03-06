#ifndef MYMATH_H
#define MYMATH_H

#include <vector>
#include <tuple>

//public math structures

struct point_2d
{
	point_2d() : m_x(0.0), m_y(0.0) {}
	point_2d(float x, float y) : m_x(x), m_y(y) {}
	bool operator==(const point_2d &p) const {
		return std::tie(p.m_x, p.m_y) == std::tie(m_x, m_y); }
	bool operator!=(const point_2d &p) const {
		return std::tie(p.m_x, p.m_y) != std::tie(m_x, m_y); }
	float m_x;
	float m_y;
};

typedef std::vector<point_2d> points_2d;

struct point_3d
{
	point_3d() : m_x(0.0), m_y(0.0), m_z(0.0) {}
	point_3d(float x, float y, float z) : m_x(x), m_y(y), m_z(z) {}
	bool operator==(const point_3d &p) const {
		return std::tie(p.m_x, p.m_y, p.m_z) == std::tie(m_x, m_y, m_z); }
	bool operator!=(const point_3d &p) const {
		return std::tie(p.m_x, p.m_y, p.m_z) != std::tie(m_x, m_y, m_z); }
	float m_x;
	float m_y;
	float m_z;
};

typedef std::vector<point_3d> points_3d;

#endif
