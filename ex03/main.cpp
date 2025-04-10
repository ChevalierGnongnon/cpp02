/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <chhoflac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 15:34:37 by chhoflac          #+#    #+#             */
/*   Updated: 2025/04/08 15:23:03 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

void test(const char* name, const Point& a, const Point& b, const Point& c, const Point& p) {
    std::cout << name << ": ";
    if (bsp(a, b, c, p)) {
        std::cout << "INSIDE ✅" << std::endl;
    } else {
        std::cout << "NOT inside ❌" << std::endl;
    }
}

int main(void) {
	Point a(0, 0);
	Point b(10, 0);
	Point c(5, 10);

	test("Inside triangle", a, b, c, Point(5, 5));
	test("Outside triangle", a, b, c, Point(20, 20));
	test("On edge", a, b, c, Point(5, 0));
	test("On vertex", a, b, c, Point(0, 0));

	Point d1(0, 0);
	Point d2(5, 0);
	Point d3(10, 0);
	test("Degenerate triangle", d1, d2, d3, Point(5, 0));

	return 0;
}