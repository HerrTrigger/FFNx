/****************************************************************************/
//    Copyright (C) 2022 Cosmos                                             //
//                                                                          //
//    This file is part of FFNx                                             //
//                                                                          //
//    FFNx is free software: you can redistribute it and/or modify          //
//    it under the terms of the GNU General Public License as published by  //
//    the Free Software Foundation, either version 3 of the License         //
//                                                                          //
//    FFNx is distributed in the hope that it will be useful,               //
//    but WITHOUT ANY WARRANTY; without even the implied warranty of        //
//    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         //
//    GNU General Public License for more details.                          //
/****************************************************************************/

#pragma once

#include "../ff7.h"

class Camera
{
    public:
        Camera() = default;
        ~Camera() = default;

        void setRotationSpeed(float rotX, float rotY, float rotZ);
        void setZoomSpeed(float speed);
        void reset();

        void controlCamera(vector3<short>* cameraPosition, vector3<short>* cameraFocusPosition);
    private:
        vector3<float> rotationSpeed = { 0.0, 0.0, 0.0 };
        vector3<float> rotationOffset = { 0.0, 0.0, 0.0 };
        float zoomSpeed = 0.0f;
        float zoomOffset = 0.0f;
        const float minZoomDist = 5000.0f;
        const float maxZoomDist = 30000.0f;
        const float minVerticalAngle = 5.0f;
        const float maxVerticalAngle = 85.0f;
};

extern Camera camera;