/*
 * Copyright 2020 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/***********************************************************************************/
/* This file is automatically generated using bindtool and can be manually edited  */
/* The following lines can be configured to regenerate this file during cmake      */
/* If manual edits are made, the following tags should be modified accordingly.    */
/* BINDTOOL_GEN_AUTOMATIC(0)                                                       */
/* BINDTOOL_USE_PYGCCXML(0)                                                        */
/* BINDTOOL_HEADER_FILE(clock_recovery_mm_ff.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(b190225233d18ff3ab3b9547ec2b89a8)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/digital/clock_recovery_mm_ff.h>
// pydoc.h is automatically generated in the build directory
#include <clock_recovery_mm_ff_pydoc.h>

void bind_clock_recovery_mm_ff(py::module& m)
{

    using clock_recovery_mm_ff = ::gr::digital::clock_recovery_mm_ff;


    py::class_<clock_recovery_mm_ff,
               gr::block,
               gr::basic_block,
               std::shared_ptr<clock_recovery_mm_ff>>(
        m, "clock_recovery_mm_ff", D(clock_recovery_mm_ff))

        .def(py::init(&clock_recovery_mm_ff::make),
             py::arg("omega"),
             py::arg("gain_omega"),
             py::arg("mu"),
             py::arg("gain_mu"),
             py::arg("omega_relative_limit"),
             D(clock_recovery_mm_ff, make))


        .def("mu", &clock_recovery_mm_ff::mu, D(clock_recovery_mm_ff, mu))


        .def("omega", &clock_recovery_mm_ff::omega, D(clock_recovery_mm_ff, omega))


        .def("gain_mu", &clock_recovery_mm_ff::gain_mu, D(clock_recovery_mm_ff, gain_mu))


        .def("gain_omega",
             &clock_recovery_mm_ff::gain_omega,
             D(clock_recovery_mm_ff, gain_omega))


        .def("set_verbose",
             &clock_recovery_mm_ff::set_verbose,
             py::arg("verbose"),
             D(clock_recovery_mm_ff, set_verbose))


        .def("set_gain_mu",
             &clock_recovery_mm_ff::set_gain_mu,
             py::arg("gain_mu"),
             D(clock_recovery_mm_ff, set_gain_mu))


        .def("set_gain_omega",
             &clock_recovery_mm_ff::set_gain_omega,
             py::arg("gain_omega"),
             D(clock_recovery_mm_ff, set_gain_omega))


        .def("set_mu",
             &clock_recovery_mm_ff::set_mu,
             py::arg("mu"),
             D(clock_recovery_mm_ff, set_mu))


        .def("set_omega",
             &clock_recovery_mm_ff::set_omega,
             py::arg("omega"),
             D(clock_recovery_mm_ff, set_omega))

        ;
}