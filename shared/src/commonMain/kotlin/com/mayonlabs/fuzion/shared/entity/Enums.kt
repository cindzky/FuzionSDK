package com.mayonlabs.fuzion.shared.entity

import kotlinx.serialization.Serializable

@Serializable
enum class Status {
    CREATED, PAID, COMPLETED, CANCELLED
}