#include <boost/numeric/ublas/matrix.hpp>
#include <boost/numeric/ublas/io.hpp>

int main () {
    using namespace boost::numeric::ublas;
    matrix<double> m (3, 3);
    for (unsigned i = 0; i < m.size1 (); ++ i)
        for (unsigned j = 0; j < m.size2 (); ++ j)
            m (i, j) = 3 * i + j;

    matrix_vector_slice<matrix<double> > mvs (m, slice (0, 1, 3), slice (0, 1, 3));
    std::cout << mvs << std::endl;
}
