//
//  ImageClass.cpp
//  hw10w10
//
//  Created by Brandon Palmer on 10/30/16.
//
//

#include "ImageClass.hpp"

void ImageClass::setup(){
    image.load("Image.png");
}

void ImageClass::draw(){
    image.draw(100, 100);
}