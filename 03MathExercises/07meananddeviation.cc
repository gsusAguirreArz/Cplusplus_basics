#include <iostream>
#include <cmath>

float calcMean( float *array, int N);
float calcStd( float *array, float mean, int N );

int main(){
    int n;
    std::cout << "Type number of  data points you have (n): ";
    std::cin >> n;

    float *array;
    array = new float[n];

    for ( int i = 0; i < n; i++ ){
        std::cout << "Type the value of x[" << i << "]: ";
        std::cin >> array[i];
    }

    float mean, std;

    mean = calcMean(array, n);
    std = calcStd(array, mean, n);

    std::cout << "The mean is: " << mean << std::endl;
    std::cout << "The standard deviation is: " << std << std::endl;

    delete[] array;
    array = NULL;
    return 0;
}

float calcMean( float *array, int N ){
    float sum = 0.0, mean;
    for ( int i = 0; i < N; i++ ){
        sum += array[i];
    }
    mean = sum / N;
    return mean;
}

float calcStd( float *array, float mean, int N ){
    float sum = 0.0, std;
    for ( int i = 0; i < N; i++ ){
        int u = array[i] - mean;
        u *= u;
        sum += u;
    }
    std = sum / N;
    return std::sqrt(std);
}