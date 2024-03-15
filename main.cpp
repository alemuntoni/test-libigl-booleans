#include <igl/copyleft/cgal/CSGTree.h>

#include <igl/readOBJ.h>
#include <igl/writeOBJ.h>

int main()
{
    Eigen::MatrixXd VA, VB, VR;
    Eigen::MatrixXi FA, FB, FR;

    igl::readOBJ(ASSET_PATH "airplane.obj", VA, FA);
    igl::readOBJ(ASSET_PATH "cow.obj", VB, FB);

    igl::copyleft::cgal::mesh_boolean(VA, FA, VB, FB, igl::MESH_BOOLEAN_TYPE_UNION, VR, FR);

    igl::writeOBJ(ASSET_PATH "result.obj", VR, FR);

    return 0;
}
