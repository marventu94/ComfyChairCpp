/*
 * ComfyChair
 * Copyright (C) 2024, M. Venturino, G. Valenzuela
 * July 13, 2024.
 *
 * MIT License
 */

#ifndef CONFERENCE_TEST_HPP
#define CONFERENCE_TEST_HPP

#include "conference.hpp"
#include "gtest/gtest.h"
#include <memory>

/**
 * @brief Runs unit tests for Conference.
 *
 */
class ConferenceTest : public ::testing::Test
{
  protected:
    // LCOV_EXCL_START
    ConferenceTest() = default;
    ~ConferenceTest() = default;

    /**
     * @brief Set the environment for testing.
     *
     */
    void SetUp() override;

    /**
     * @brief Clean the environment after testing.
     *
     */
    void TearDown() override;
    // LCOV_EXCL_STOP

    std::shared_ptr<Conference> conference; /**< The conference. */
};

#endif // CONFERENCE_TEST_HPP
