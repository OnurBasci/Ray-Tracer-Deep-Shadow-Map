#pragma once
#include<cmath>
#include<iostream>
#include<vector>
#include"Vector3.h"
#define PI 3.141592653589793

class MathHelper
{
public:
    static double gaussian(double x, double mean, double sigma);

    static std::vector<std::vector<double>> generateGaussianKernel(int size, double sigma);
    static std::vector<std::vector<double>> generateUniformKernel(int size);

    //density functions
    static float constantDesnity(Vector3 p);

    static Vector3 clamp_vector(Vector3 vect);

    //perlin noise
    static double fade(double t);
    static double lerp(double t, double a, double b);
    static double grad(int hash, double x, double y, double z);
    static double perlin_noise(Vector3 pos);
    static double abs_perlin_noise(Vector3 pos);
    static double perlin_noise_normalized(Vector3 pos);
    static double non_zero_perlin_noise(Vector3 pos);
};