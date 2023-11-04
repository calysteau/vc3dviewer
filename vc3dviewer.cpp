// Including necessary headers
#include <GL/glcorearb.h>

#include <osgViewer/Viewer>
#include <osgEarth/MapNode>
#include <osgEarth/ImageLayer>
#include <osgEarth/ElevationLayer>
#include <osgEarth/GDAL>
#include <osgEarth/EarthManipulator>

using namespace osgEarth;
using namespace osgEarth::Util;

int main(int argc, char** argv)
{
    // Initial OSG setup
    osg::ArgumentParser arguments(&argc, argv);
    osgViewer::Viewer viewer(arguments);

    // Setting up a view manipulator for earth navigation
    osgEarth::Util::EarthManipulator* manipulator = new osgEarth::Util::EarthManipulator();
    viewer.setCameraManipulator(manipulator);

    // Creating and configuring the 3D map
    osgEarth::Map* map = new osgEarth::Map();

    // For ElevationLayer
    osgEarth::GDALElevationLayer* elevationLayer = new osgEarth::GDALElevationLayer();
    elevationLayer->setURL("path_to_your_srtm_data");
    map->addLayer(elevationLayer);

    // For ImageLayer
    osgEarth::GDALImageLayer* imageLayer = new osgEarth::GDALImageLayer();
    imageLayer->setURL("path_to_your_sentinel_data");
    map->addLayer(imageLayer);

    // Attaching the map to a MapNode for display
    osgEarth::MapNode* mapNode = new osgEarth::MapNode(map);
    viewer.setSceneData(mapNode);

    // Starting the visualization loop
    return viewer.run();
}