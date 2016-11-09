TEMPLATE = app
TARGET = filter
INCLUDEPATH += .

QMAKE_MAC_SDK = macosx10.12

# Input
HEADERS += iterator.h vectorIterator.h filterIterator.h predicate.h positiveIntPredicate.h
SOURCES += main.cpp vectorIterator.cpp filterIterator.cpp
