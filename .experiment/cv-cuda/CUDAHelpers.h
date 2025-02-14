//******************************************************************************
//* File:   CUDAHelpers.h
//* Author: Jon Newman <jpnewman snail mit dot edu>
//*
//* Copyright (c) Jon Newman (jpnewman snail mit dot edu)
//* All right reserved.
//* This file is part of the Oat project.
//* This is free software: you can redistribute it and/or modify
//* it under the terms of the GNU General Public License as published by
//* the Free Software Foundation, either version 3 of the License, or
//* (at your option) any later version.
//* This software is distributed in the hope that it will be useful,
//* but WITHOUT ANY WARRANTY; without even the implied warranty of
//* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//* GNU General Public License for more details.
//* You should have received a copy of the GNU General Public License
//* along with this source code.  If not, see <http://www.gnu.org/licenses/>.
//*******************************************************************************

// TODO: to implementation
#include <cuda_runtime.h>
#include "opencv2/opencv.hpp"
#include "opencv2/core/cuda/common.hpp"

#ifndef OAT_CUDAHELPERS_H
#define	OAT_CUDAHELPERS_H

#define MATIO_CU_KERNEL void(*kernel)   \
        (                               \
            const cv::cuda::PtrStepSzb, \
            cv::cuda::PtrStepSzb        \
        )

//namespace oat {

void callKernel(MATIO_CU_KERNEL,
                cv::InputArray _input,
                cv::OutputArray _output,
                cv::cuda::Stream _stream);

//}      /* namespace oat */
#endif /* OAT_FILEFORMAT_H */
