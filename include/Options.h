/**
* This file is part of UW-SLAM.
* 
* Copyright 2018.
* Developed by Fabio Morales,
* Email: fabmoraleshidalgo@gmail.com; GitHub: @fmoralesh
*
* UW-SLAM is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*
* UW-SLAM is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with UW-SLAM. If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once
/// OpenCV libraries. May need review for the final release
#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include "opencv2/calib3d.hpp"

namespace uw{

// Global constants
extern const int PYRAMID_LEVELS;
extern int BLOCK_SIZE;
extern double GRADIENT_THRESHOLD;


// Global variables
// extern float fx_pyramid[PYRAMID_LEVELS];
// extern float fy_pyramid[PYRAMID_LEVELS];
// extern float cx_pyramid[PYRAMID_LEVELS];
// extern float cy_pyramid[PYRAMID_LEVELS];
// extern float inverse_fx_pyramid[PYRAMID_LEVELS];
// extern float inverse_fy_pyramid[PYRAMID_LEVELS];
// extern float inverse_cx_pyramid[PYRAMID_LEVELS];
// extern float inverse_cy_pyramid[PYRAMID_LEVELS];

// extern int   w_pyramid[PYRAMID_LEVELS];
// extern int   h_pyramid[PYRAMID_LEVELS];

// extern cv::Mat   K[PYRAMID_LEVELS];
// extern cv::Mat   inv_K[PYRAMID_LEVELS];

}