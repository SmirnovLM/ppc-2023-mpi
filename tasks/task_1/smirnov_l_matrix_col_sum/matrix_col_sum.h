// Copyright 2023 Smirnov Leonid
#pragma once
#include <vector>
#include <mpi.h>
#include <iostream>
#include <utility>

std::vector<double> transposition
(const std::vector<double>& matrix, const size_t rows, const size_t cols);

std::pair<int, int> countAndOffsetDistribution
(const size_t rows, int rank);

std::pair<std::vector<int>, std::vector<int>> distribution
(bool flag, const size_t rows, const size_t cols);

std::vector<double> MatrixColsSumSequential
(const std::vector<double>& matrix, const size_t rows, const size_t cols);

std::vector<double> MatrixColsSumParallel
(const std::vector<double>& matrix, const size_t rows, const size_t cols);
