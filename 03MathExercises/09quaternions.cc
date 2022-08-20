#include <iostream>


template <class T>
class Quaternion {
    private:
        T real_x0, img_x1, img_x2, img_x3;
        friend std::ostream& operator<< ( std::ostream& out, const Quaternion& q ){
            out << "(" << ( (q.real_x0 >= 0) ? " + " : " - " ) << ( (q.real_x0 >= 0) ? q.real_x0 : -q.real_x0 );
            out << ( (q.img_x1 >= 0) ? " + " : " - " ) << ( (q.img_x1 >= 0) ? q.img_x1 : -q.img_x1 ) << "i";
            out << ( (q.img_x2 >= 0) ? " + " : " - " ) << ( (q.img_x2 >= 0) ? q.img_x2 : -q.img_x2 ) << "j";
            out << ( (q.img_x3 >= 0) ? " + " : " - " ) << ( (q.img_x3 >= 0) ? q.img_x3 : -q.img_x3 ) << "k";
            out << " )";
            return out;
        };
    public:
        Quaternion (){
            real_x0 = img_x1 = img_x2 = img_x3 = 0;
        }
        Quaternion ( T a, T b, T c, T d ){
            real_x0 = a;
            img_x1 = b;
            img_x2 = c;
            img_x3 = d;
        }

        Quaternion operator + ( Quaternion const& q ){
            Quaternion tmp;
            tmp.real_x0 = real_x0 + q.real_x0;
            tmp.img_x1 = img_x1 + q.img_x1;
            tmp.img_x2 = img_x2 + q.img_x2;
            tmp.img_x3 = img_x3 + q.img_x3;
            return tmp;
        }
        Quaternion operator * ( Quaternion const& q ){
            Quaternion tmp;
            tmp.real_x0 = real_x0 * q.real_x0 - img_x1 * q.img_x1 - img_x2 * q.img_x2 - img_x3 * q.img_x3;
            tmp.img_x1 = real_x0 * q.img_x1 + img_x1 * q.real_x0 + img_x2 * q.img_x3 - img_x3 * q.img_x2;
            tmp.img_x2 = real_x0 * q.img_x2 + img_x2 * q.real_x0 + img_x3 * q.img_x1 - img_x1 * q.img_x3;
            tmp.img_x3 = real_x0 * q.img_x3 + img_x3 * q.real_x0 + img_x1 * q.img_x2 - img_x2 * q.img_x1;
            return tmp;
        }
        Quaternion Conjugate(){
            Quaternion tmp;
            tmp.real_x0 = real_x0;
            tmp.img_x1 = -img_x1;
            tmp.img_x2 = -img_x2;
            tmp.img_x3 = -img_x3;
            return tmp;
        }
        T Inner( Quaternion const& q ){
            return real_x0 * q.real_x0 + img_x1 * q.img_x1 + img_x2 * q.img_x2 + img_x3 * q.img_x3; 
        }

};


int main(){
    Quaternion<int> u(0,1,0,0), v(0,0,1,0), w;
    std::cout << u << std::endl;
    std::cout << v << std::endl;
    std::cout << v.Conjugate() << std::endl;
    w = u + v;
    std::cout << w << std::endl;
    w = u * v;
    std::cout << w << std::endl;
    w = v * u;
    std::cout << w << std::endl;
    std::cout << w.Inner(w) << std::endl;
    return 0;
}