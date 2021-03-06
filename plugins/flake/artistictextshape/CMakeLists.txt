project( artistictextshape )

include_directories(
    ${CMAKE_SOURCE_DIR}/libs/widgets
)

set ( ArtisticTextShape_SRCS
    ArtisticTextShapePlugin.cpp
    ArtisticTextShape.cpp
    ArtisticTextRange.cpp
    ArtisticTextShapeFactory.cpp
    ArtisticTextTool.cpp
    ArtisticTextToolFactory.cpp
    ArtisticTextToolSelection.cpp
    ArtisticTextShapeConfigWidget.cpp
    ArtisticTextShapeOnPathWidget.cpp
    ArtisticTextShapeLoadingUpdater.cpp
    ArtisticTextLoadingContext.cpp
    AttachTextToPathCommand.cpp
    DetachTextFromPathCommand.cpp
    ChangeTextOffsetCommand.cpp
    ChangeTextFontCommand.cpp
    ChangeTextAnchorCommand.cpp
    AddTextRangeCommand.cpp
    RemoveTextRangeCommand.cpp
    MoveStartOffsetStrategy.cpp
    SelectTextStrategy.cpp
    ReplaceTextRangeCommand.cpp
)

ki18n_wrap_ui( ArtisticTextShape_SRCS
    ArtisticTextShapeConfigWidget.ui
    ArtisticTextShapeOnPathWidget.ui
)

qt5_add_resources(ArtisticTextShape_SRCS artistictextshape.qrc)

add_library(krita_shape_artistictext MODULE ${ArtisticTextShape_SRCS} )

target_link_libraries(krita_shape_artistictext kritaflake kritaui)

install( TARGETS krita_shape_artistictext DESTINATION ${KRITA_PLUGIN_INSTALL_DIR} )
