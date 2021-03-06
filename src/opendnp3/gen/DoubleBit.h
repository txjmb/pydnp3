/*
 * -*- coding: utf-8 -*- {{{
 * vim: set fenc=utf-8 ft=python sw=4 ts=4 sts=4 et:
 *
 * Copyright 2018, Kisensum.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * Neither Kisensum, nor any of its employees, nor any jurisdiction or
 * organization that has cooperated in the development of these materials,
 * makes any warranty, express or implied, or assumes any legal liability
 * or responsibility for the accuracy, completeness, or usefulness or any
 * information, apparatus, product, software, or process disclosed, or
 * represents that its use would not infringe privately owned rights.
 * Reference herein to any specific commercial product, process, or service
 * by trade name, trademark, manufacturer, or otherwise does not necessarily
 * constitute or imply its endorsement, recommendation, or favoring by Kisensum.
 * }}}
 */

#ifndef PYDNP3_OPENDNP3_GEN_DOUBLEBIT_H
#define PYDNP3_OPENDNP3_GEN_DOUBLEBIT_H

#include <pybind11/pybind11.h>
#include <Python.h>

#include <opendnp3/gen/DoubleBit.h>

#ifdef PYDNP3_OPENDNP3

namespace py = pybind11;
using namespace std;

void bind_DoubleBit(py::module &m)
{
    // ----- enum class: opendnp3::DoubleBit -----
    py::enum_<opendnp3::DoubleBit>(m, "DoubleBit",
        "Enumeration for possible states of a double bit value.")

        .value(
            "INTERMEDIATE",
            opendnp3::DoubleBit::INTERMEDIATE,
            "Transitioning between end conditions."
        )

        .value(
            "DETERMINED_OFF",
            opendnp3::DoubleBit::DETERMINED_OFF,
            "End condition, determined to be OFF."
        )

        .value(
            "DETERMINED_ON",
            opendnp3::DoubleBit::DETERMINED_ON,
            "End condition, determined to be ON."
        )

        .value(
            "INDETERMINATE",
            opendnp3::DoubleBit::INDETERMINATE,
            "Abnormal or custom condition"
        );

    // ----- function: opendnp3::DoubleBitToType -----
    m.def(
        "DoubleBitToType",
        &opendnp3::DoubleBitToType,
        py::arg("db")
    );

    // ----- function: opendnp3::DoubleBitFromType -----
    m.def(
        "DoubleBitFromType",
        &opendnp3::DoubleBitFromType,
        "type rawType: unsigned char",
        py::arg("rawType")
    );

    // ----- function: opendnp3::DoubleBitToString -----
    m.def(
        "DoubleBitToString",
        &opendnp3::DoubleBitToString,
        py::arg("db")
    );
}

#endif // PYDNP3_OPENDNP3
#endif
