# OSGEarth 3D Map Visualization

## Introduction
This project is a simple C++ application that utilizes the OpenSceneGraph (OSG) and OSGEarth libraries to visualize 3D terrain and image data. It provides a basic example of how to set up a 3D map viewer, add elevation and image layers, and interact with the earth's surface.

## Prerequisites
Before compiling and running this project, you must have the following libraries installed:
- OpenSceneGraph (OSG)
- OSGEarth

These libraries provide the necessary components to handle 3D graphics and geospatial data manipulation.

## Installation
To compile the project, follow these steps:

1. Clone the repository to your local machine.
2. Ensure that OSG and OSGEarth are properly installed and that their include and lib directories are accessible to your compiler.
3. Compile the code using your preferred C++ compiler and build system.

## Configuration
Before running the application, make sure to set the correct paths to your SRTM and Sentinel data files:

- Replace `path_to_your_srtm_data` with the path to your SRTM elevation data.
- Replace `path_to_your_sentinel_data` with the path to your Sentinel image data.

## Running the Application
To run the application, execute the compiled binary from the command line. The application window will display the 3D map, and you can interact with it using the mouse and keyboard.

## Controls
The application uses `osgEarth::Util::EarthManipulator` for navigation:
- Left-click and drag to rotate the view.
- Right-click and drag to pan the view.
- Scroll the mouse wheel to zoom in and out.

## Support
If you encounter any problems or have any suggestions, please open an issue in the GitHub repository.

## Acknowledgements
This project uses the following open-source libraries:
- [OpenSceneGraph](http://www.openscenegraph.org/)
- [OSGEarth](http://osgearth.org/)

## Disclaimer
This code is provided "as is", without warranty of any kind. The author(s) shall not be liable for any damages resulting from its use.

---

Happy mapping!
