import QtQuick 2.15

Text {
    id: header1

    anchors.left: parent.left
    anchors.right: parent.right
    anchors.top: parent.top
    anchors.topMargin: 30
    anchors.leftMargin: 40

    font.pointSize: 18

    property alias header_text: header1.text
}
