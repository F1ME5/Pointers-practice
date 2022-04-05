/*
Copyright 2022 by Néstor Nahuatlato
<soy_nestor@hotmail.com>

Licensed under GNU General Public License 3.0 or later.
@license GPL-3.0+
*/

#include <iostream>
#define LOG(x) std::cout<<x<<std::endl

template <typename T, int n>
class Matrix{
    private:
        T** ptr[n];
    public:
        Matrix(){
            for(int i(0); i < n; i++){
                ptr[i] = new T*[n];

                for(int j(0); j < n; j++)
                    ptr[i][j] = new T(j);
            }

            LOG("Data created successfully!");
        }

        ~Matrix(){
            for(int i(0); i < n; i++){
                delete* ptr[i];
                delete ptr[i];
            }

            LOG("Data deleted successfully!");
        }

        friend std::ostream& operator << (std::ostream& stream, const Matrix<T, n>& e){
            for(int i(0); i < n; i++){
                for(int j(0); j < n; j++)
                    stream<<*e.ptr[i][j]<<" ";

                stream<<std::endl;
            }

            return stream;
        }
};

class Entity{
    private:
        std::string value;
    public:
        Entity();
        explicit Entity(const int& v){
            value = std::to_string(v);
        }

        friend std::ostream& operator << (std::ostream& stream, const Entity& e){
            stream<<e.value;

            return stream;
        }
};

int main(){
    //Data types that work: int, float, double, bool, classes and structs (you need to do the support like class Entity).
    //Data types that don't work: strings, pointers.
    Matrix<Entity, 10> matrix;

    LOG(matrix);

    return 0;
}
