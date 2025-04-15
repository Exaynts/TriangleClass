#pragma once
#ifndef POINT_H
#define POINT_H

class Point {
public:
	// Êîíñòðóêòîð
	Point(double _õ = 0, double _ó = 0) : x(_õ), y(_ó) {}

	// Äðóãèå ìåòîäû
	void Show() const;

public:
	double x, y;
};

#endif /* POINT_H */
