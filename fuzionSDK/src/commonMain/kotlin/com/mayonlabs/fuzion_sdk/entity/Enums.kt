package com.mayonlabs.fuzion_sdk.entity

import kotlinx.serialization.Serializable

@Serializable
enum class Status {
    CREATED, PAID, COMPLETED, CANCELLED
}