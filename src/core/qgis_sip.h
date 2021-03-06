/***************************************************************************
  qgis_sip - QGIS SIP Macros

 ---------------------
 begin                : 4.5.2017
 copyright            : (C) 2017 by Denis Rouzaud
 email                : denis.rouzaud@gmail.com
 ***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/
#ifndef QGIS_SIP_H
#define QGIS_SIP_H

/*
 * if written, the SIP file will not be generated automatically
 * or can be also defined directly in the file (to avoid including this)
 */
#define SIP_NO_FILE

/*
 * the module will be included if the condition is met
 */
#define SIP_IF_MODULE(condition)


/*
 * http://pyqt.sourceforge.net/Docs/sip4/annotations.html?highlight=keepreference#function-annotation-Transfer
 *
 * Example QgsVectorLayer::setDiagramRenderer
 */
#define SIP_TRANSFER

/*
 * http://pyqt.sourceforge.net/Docs/sip4/annotations.html?highlight=keepreference#function-annotation-TransferBack
 */
#define SIP_TRANSFERBACK

/*
 * http://pyqt.sourceforge.net/Docs/sip4/annotations.html?highlight=keepreference#function-annotation-TransferThis
 */
#define SIP_TRANSFERTHIS

/*
 * http://pyqt.sourceforge.net/Docs/sip4/annotations.html#argument-annotation-Out
 */
#define SIP_OUT

/*
 * http://pyqt.sourceforge.net/Docs/sip4/annotations.html#argument-annotation-In
 */
#define SIP_IN

/*
 * Combination of
 * http://pyqt.sourceforge.net/Docs/sip4/annotations.html#argument-annotation-In
 * and
 * http://pyqt.sourceforge.net/Docs/sip4/annotations.html#argument-annotation-Out
 */
#define SIP_INOUT

/*
 * http://pyqt.sourceforge.net/Docs/sip4/annotations.html#function-annotation-Factory
 */
#define SIP_FACTORY

/*
 * http://pyqt.sourceforge.net/Docs/sip4/annotations.html#class-annotation-PyName
 */
#define SIP_PYNAME(name)

/*
 * http://pyqt.sourceforge.net/Docs/sip4/annotations.html#argument-annotation-KeepReference
 */
#define SIP_KEEPREFERENCE

/*
 * http://pyqt.sourceforge.net/Docs/sip4/annotations.html#argument-annotation-Array
 */
#define SIP_ARRAY

/*
 * http://pyqt.sourceforge.net/Docs/sip4/annotations.html#argument-annotation-ArraySize
 */
#define SIP_ARRAYSIZE

/*
 * http://pyqt.sourceforge.net/Docs/sip4/annotations.html#class-annotation-NoDefaultCtors
 */
#define SIP_NODEFAULTCTORS

/*
 * http://pyqt.sourceforge.net/Docs/sip4/annotations.html?highlight=deprecated#function-annotation-Deprecated
 */
#define SIP_DEPRECATED

/*
 * http://pyqt.sourceforge.net/Docs/sip4/annotations.html?highlight=constrained#argument-annotation-Constrained
 */
#define SIP_CONSTRAINED

/*
 * http://pyqt.sourceforge.net/Docs/sip4/annotations.html?highlight=external#class-annotation-External
 */
#define SIP_EXTERNAL

/*
 * http://pyqt.sourceforge.net/Docs/sip4/annotations.html?highlight=allownone
 */
#define SIP_ALLOWNONE

/*
  * discard line
  */
#define SIP_SKIP

/*
  * force a private line to be written
  */
#define SIP_FORCE

/*
  * specify an alternative type for SIP argument or return value
  */
#define SIP_PYALTERNATIVETYPE(type)

/*
  * specify an alternative default value for SIP argument
  */
#define SIP_PYARGDEFAULT(value)

/*
  * remove argument in SIP method
  */
#define SIP_PYARGREMOVE


/*
 * http://pyqt.sourceforge.net/Docs/sip4/annotations.html?highlight=keepreference#function-annotation-ReleaseGIL
 */
#define SIP_RELEASEGIL

/*
 * Will insert a `%Feature feature` directive in sip files
 */
#define SIP_FEATURE(feature)

/*
 * Will insert a `%If feature` directive in sip files
 */
#define SIP_IF_FEATURE(feature)

/*
 * Will place the current line with an `%If feature` directive in sip file
 */
#define SIP_WHEN_FEATURE(feature)

/*
 * Convert to subclass code
 */
#define SIP_CONVERT_TO_SUBCLASS_CODE(code)

/*
 * Virtual error handler (/VirtualErrorHandler/)
 */
#define SIP_VIRTUALERRORHANDLER(name)

/*
 * Throw - adds deprecated c++ throw calls for sip. Required for sip to add appropriate
 * try/catch blocks around call and catch the correct exception, otherwise only
 * unknown generic exceptions are available for Python code.
 */
#define SIP_THROW(name)

/*
 * Will insert a `%End` directive in sip files
 */
#define SIP_END

/*
 * Class level annotation for abstract classes
 */
#define SIP_ABSTRACT

/*
 * Virtual catcher code
 */
#define SIP_VIRTUAL_CATCHER_CODE(code)

/*
 * Force documentation of templates
 * Available for SIP 4.19.7+
 */
#define SIP_DOC_TEMPLATE

/*
 * Define Python special method (bool, repr, etc.) using the given method or code
 * sipify.pl will create a dedicated python file named according to the class
 * and located in python/{module}/auto_additions/{classname}.py
 * a simple method name can be provided (e.g. isValid) and sipify will create the proper code
 * or some Python code can be provided:
 *
 * SIP_PYTHON_SPECIAL_BOOL( isValid )
 * => sipify => MyClass.__bool__ = lambda self: self.isValid()
 *
 * SIP_PYTHON_SPECIAL_REPR( "'<MyClass {}>'format(self.toString())'" )
 * => sipify => MyClass.__repr__ = lambda self: '<MyClass {}>'format(self.toString())'
 */
#define SIP_PYTHON_SPECIAL_BOOL(method_or_code)
#define SIP_PYTHON_SPECIAL_REPR(method_or_code)

#endif // QGIS_SIP_H
