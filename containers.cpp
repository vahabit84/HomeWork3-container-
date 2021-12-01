#include<iostream>
#include<list>
#include<vector>

using namespace std;
//task2
class Matrixs
{
private:
    size_t dimension;
    vector<int>  matrix;
public:
    Matrixs(size_t _dimension): dimension(_dimension)
    {
        for(size_t i=0; i<dimension*dimension; ++i){
            matrix.push_back( rand()%10 );
        }
    }
    Matrixs(const Matrixs& Mathr, size_t _dimension,size_t _dimension): dimension(_dimension)
    {
        for(size_t i=0; i<dimension*dimension; ++i){
            matrix.push_back( rand()%10 );
        }
    }
    ~Matrixs()
    {}
/*    int32_t determinator (Matrixs Matr, size_t demen)
    {
       size_t line, column;
       if(demen == 1) return matrix[0];
       if(demen == 2) return (matrix[0]*matrix[3]-matrix[1]*matrix[2]);
       int32_t rezult = 0;
       int k;
       for(size_t i = 0; i < demen; ++i){
            Matrixs newMatr(, column, demen-1)
            if(i%2 == 0) k = 1
            else k = -1;
            rezult+=k*Matr[i]*newMatr.determinator( demen-1);
       };
    }*/
    void OutMatr()
    {
        for (size_t i=0;i< dimension; ++i){
            for (size_t j=0;j< dimension; ++j){
                cout << matrix[i*dimension + j]<<" ";
            }
        cout << endl;
        }
    }
};
int main()
{
    //task
    list<double> fract {2.56, 5.47, 3.47, 12.5, 6.4};
    double areth = 0;
    size_t i=0;
    for(double s: fract){
        areth += s;
        ++i;
    };
    fract.push_back( areth/i );
    for(double s: fract){
        cout << s <<' ';
    };
    // task2
    cout << endl << "----------task 2----------" <<endl;
    Matrixs m1(4);
    m1.OutMatr();

    return 0;
}
