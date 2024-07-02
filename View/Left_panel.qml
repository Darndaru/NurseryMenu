import QtQuick 2.15
import QtQuick.Layouts
import QtQuick.Controls


Rectangle {
    id: root
    color: "#D08F71"
    height: parent.height
    width: 50

    property int item_height: 20;

    ColumnLayout {
        id: header
        height: implicitHeight
        width: implicitWidth

        spacing: 10

        ColumnLayout {
            id: menu

            Layout.preferredHeight: item_height
            Layout.fillWidth: true

            Label {
                Layout.alignment: verticalCenter | horizontalCenter
                text: qsTr('Меню')
            }
        }
        ColumnLayout {
            id: purchase

            Layout.preferredHeight: item_height
            Layout.preferredWidth: root.width

            Label {
                Layout.alignment: verticalCenter | horizontalCenter
                text: qsTr('Закупки')
            }
        }
        ColumnLayout {
            id: prediction

            Layout.preferredHeight: item_height
            Layout.preferredWidth: root.width

            Label {
                Layout.alignment: verticalCenter | horizontalCenter
                text: qsTr('Прогноз')
            }
        }
    }
}
