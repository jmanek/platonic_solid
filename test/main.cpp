#include <Eigen/Core>
#include <igl/writeOBJ.h>
#include "platonic_solid.h"

int main(int argc, char **argv) { 
    Eigen::MatrixXd TV, OV, CV, IV, DV;
    Eigen::MatrixXi TF, OF, CF, IF, DF;

    platonic_solid::tetrahedron(TV, TF);
    igl::writeOBJ("tetrahedron.obj", TV, TF);

    platonic_solid::octahedron(OV, OF);
    igl::writeOBJ("octahedron.obj", OV, OF);

    platonic_solid::cube(CV, CF);
    igl::writeOBJ("cube.obj", CV, CF);

    platonic_solid::icosahedron(IV, IF);
    igl::writeOBJ("icosahedron.obj", IV, IF);

    platonic_solid::dodecahedron(DV, DF);
    igl::writeOBJ("dodecahedron.obj", DV, DF);
}