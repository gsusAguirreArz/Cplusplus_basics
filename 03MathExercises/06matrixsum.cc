#include <iostream>
#include <iomanip>

int main(){
    // n -> rows
    // m -> cols
    int n,m;
    std::cout << "Type the size of your matrices A and B (n m): ";
    std::cin >> n >> m;

    // arrays of arrays concept
    int **mat_A = new int*[n];
    for ( int i = 0; i < n; i++ )
        mat_A[i] = new int[m];

    // other way
    int **mat_B = new int*[n];
    if (n){
        mat_B[0] = new int[n * m];
        for ( int i = 1; i < n; i++ )
            mat_B[i] = mat_B[0] + i * m;
    }

    int **mat_C = new int*[n];
    for ( int i = 0; i < n; i++ )
        mat_C[i] = new int[m];

    // add values
    for ( int i = 0; i < n; i++ ){
        for ( int j = 0; j < m; j++ ){
            std::cout << "Type the values of ( a[" << i << "][" << j << "] b[" << i << "][" << j << "] ): ";
            std::cin >> mat_A[i][j] >> mat_B[i][j];
            mat_C[i][j] = mat_A[i][j] + mat_B[i][j];
        }
    }

    // print C
    std::cout << "[\n";
    for ( int i = 0; i < n; i++ ){
        std::cout << std::setw(3) << "[";
        for ( int j = 0; j < m; j++ ){
            if ( j == m - 1 ){
                std::cout << std::setw(3) << mat_C[i][j] << " ";
                continue;
            }
            std::cout << std::setw(3) << mat_C[i][j] << ",";
        }
        if ( i == n - 1 ){
            std::cout << "]\n";
            continue;
        }
        std::cout << "],\n";
    }
    std::cout << "]" << std::endl;



    // free memory for mat_A and C
    for ( int i = 0; i < n; i++ )
        delete[] mat_A[i];
    delete[] mat_A;

    for ( int i =0; i < n; i++ )
        delete[] mat_C[i];
    delete[] mat_C;

    // free memory for mat_B
    if (n) delete[] mat_B[0];
    delete[] mat_B;

    return 0;
}