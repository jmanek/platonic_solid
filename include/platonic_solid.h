#ifndef PLATONIC_SOLIDS_H
#define PLATONIC_SOLIDS_H
#include <Eigen/Core>
#include <igl/list_to_matrix.h>
#include <vector>


namespace platonic_solid {
#define GR 1.618
#define FGR 1.0/GR

template <
    typename DerivedV,
    typename DerivedF>
void tetrahedron(
    Eigen::PlainObjectBase<DerivedV>& V,
    Eigen::PlainObjectBase<DerivedF>& F)
{
    std::vector<std::vector<double>> VV 
    {
        {1, 1, 1},
        {1, -1, -1},
        {-1, 1, -1},
        {-1, -1, 1}
    };
    igl::list_to_matrix(VV, V);

    std::vector<std::vector<int>> FF
    {
        {0, 1, 2},
        {0, 3, 1},
        {0, 2, 3},
        {1, 3, 2}
    };
    igl::list_to_matrix(FF, F);
}

template <
    typename DerivedV,
    typename DerivedF>
void octahedron(
    Eigen::PlainObjectBase<DerivedV>& V,
    Eigen::PlainObjectBase<DerivedF>& F)
{
    std::vector<std::vector<double>> VV 
    {
        {1, 0, 0},
        {-1, 0, 0},
        {0, 1, 0},
        {0, -1, 0},
        {0, 0, 1},
        {0, 0, -1}
    };
    igl::list_to_matrix(VV, V);

    std::vector<std::vector<int>> FF
    {
        {0, 2, 4},
        {0, 4, 3},
        {0, 3, 5},
        {0, 5, 2},
        {1, 4, 2},
        {1, 2, 5},
        {1, 5, 3},
        {1, 3, 4}
    };
    igl::list_to_matrix(FF, F);
}

template <
    typename DerivedV,
    typename DerivedF>
void cube(
    Eigen::PlainObjectBase<DerivedV>& V,
    Eigen::PlainObjectBase<DerivedF>& F)
{
    std::vector<std::vector<double>> VV 
    {
        {1, 1, 1},
        {-1, 1, 1},
        {1, -1, 1},
        {1, 1, -1},
        {-1, -1, 1},
        {-1, 1, -1},
        {1, -1, -1},
        {-1, -1, -1}
    };
    igl::list_to_matrix(VV, V);

    std::vector<std::vector<int>> FF
    {
        {0, 1, 4},
        {0, 4, 2},
        {0, 2, 6},
        {0, 6, 3},
        {0, 3, 5},
        {0, 5, 1},
        {7, 1, 5},
        {7, 5, 3},
        {7, 3, 6},
        {7, 6, 2},
        {7, 2, 4},
        {7, 4, 1}
    };
    igl::list_to_matrix(FF, F);
}

template <
    typename DerivedV,
    typename DerivedF>
void icosahedron(
    Eigen::PlainObjectBase<DerivedV>& V,
    Eigen::PlainObjectBase<DerivedF>& F)
{
    std::vector<std::vector<double>> VV 
    {
        {0, 1, GR},
        {0, -1, GR},
        {0, 1, -GR},
        {0, -1, -GR},
        {1, GR, 0},
        {-1, GR, 0},
        {1, -GR, 0},
        {-1, -GR, 0},
        {GR, 0, 1},
        {-GR, 0, 1},
        {GR, 0, -1},
        {-GR, 0, -1}
    };
    igl::list_to_matrix(VV, V);

    std::vector<std::vector<int>> FF
    {
        {0, 1, 8},
        {0, 8, 4},
        {0, 4, 5},
        {0, 5, 9},
        {0, 9, 1},
        {10, 8, 6},
        {10, 6, 3},
        {10, 3, 2},
        {10, 2, 4},
        {10, 4, 8},
        {7, 9, 11},
        {7, 11, 3},
        {7, 3, 6},
        {7, 6, 1},
        {7, 1, 9},
        {2, 5, 4},
        {2, 3, 11},
        {2, 11, 5},
        {1, 6, 8},
        {9, 5, 11},
    };
    igl::list_to_matrix(FF, F);

}

template <
    typename DerivedV,
    typename DerivedF>
void dodecahedron(
    Eigen::PlainObjectBase<DerivedV>& V,
    Eigen::PlainObjectBase<DerivedF>& F)
{
    std::vector<std::vector<double>> VV 
    {
        {1, 1, 1},
        {-1, 1, 1},
        {1, -1, 1},
        {1, 1, -1},
        {-1, -1, 1},
        {-1, 1, -1},
        {1, -1, -1},
        {-1, -1, -1},
        {0, FGR, GR},
        {0, -FGR, GR},
        {0, FGR, -GR},
        {0, -FGR, -GR},
        {FGR, GR, 0},
        {-FGR, GR, 0},
        {FGR, -GR, 0},
        {-FGR, -GR, 0},
        {GR, 0, FGR},
        {-GR, 0, FGR},
        {GR, 0, -FGR},
        {-GR, 0, -FGR}
    };
    igl::list_to_matrix(VV, V);

    std::vector<std::vector<int>> FF
    {
        {0, 8, 9},
        {0, 9, 2},
        {0, 2, 16},
        {0, 16, 18},
        {0, 18, 3},
        {0, 3, 12},
        {0, 12, 13},
        {0, 13, 1},
        {0, 1, 8},
        {12, 3, 10},
        {12, 10, 5},
        {12, 5, 13},
        {16, 2, 14},
        {16, 14, 6},
        {16, 6, 18},
        {8, 1, 17},
        {8, 17, 4},
        {8, 4, 9},
        {3, 18, 6},
        {3, 6, 11},
        {3, 11, 10},
        {2, 9, 4},
        {2, 4, 15},
        {2, 15, 14},
        {1, 13, 5},
        {1, 5, 19},
        {1, 19, 17},
        {17, 19, 7},
        {17, 7, 15},
        {17, 15, 4},
        {5, 10, 11},
        {5, 11, 7},
        {5, 7, 19},
        {6, 14, 15},
        {6, 15, 7},
        {6, 7, 11},

    };
    igl::list_to_matrix(FF, F);
}


}
#endif