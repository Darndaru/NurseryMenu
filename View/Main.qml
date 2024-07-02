import QtQuick
import QtQuick.Controls
import QtQuick.Layouts
import QtQuick.LocalStorage
// import "../Model/database.h"



ApplicationWindow {
    id: window

    property int margin: 100;

    width: 1000
    height: 480
    visible: true
    color: '#F5E3E0'
    title: qsTr("Child food")

    Left_panel {
        id: left_panel

        width: 50
        height: window.height
    }

    ColumnLayout {
        anchors.top: parent.top
        anchors.left: left_panel.right
        anchors.leftMargin: margin
        anchors.rightMargin: margin
        width: parent.width - left_panel.width - 2 * margin
        spacing: 25

        Label {
            id: header
            width: contentWidth
            Layout.alignment: Qt.AlignHCenter

            font.pointSize: 24
            text: qsTr("Генерация меню")
        }

        ColumnLayout {
            Layout.alignment: Qt.AlignHCenter

            Button {
                text: 'Сгенерировать'
            }
        }


    }

    // Component.onCompleted: {
    //     Database db = Database();
    // }
}
