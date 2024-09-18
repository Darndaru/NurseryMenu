import QtQuick
import QtQuick.Controls
import QtQuick.Layouts
import QtQuick.LocalStorage

ApplicationWindow {
    id: window

    width: 1000
    height: 480
    visible: true
    color: '#F5E3E0'
    title: qsTr("Child food")

    // Left_panel {
    //     id: left_panel

    //     width: 50
    //     height: window.height
    // }

    ColumnLayout {
        anchors.top: parent.top
        anchors.left: parent.left
        anchors.leftMargin: left_panel.width + 100
        anchors.rightMargin: 100

        // Header1 {
        //     id: header
        //     header_text: qsTr("Генерация меню")
        // }

        ColumnLayout {
            Layout.fillWidth: true

            anchors.top: header.bottom
            anchors.left: parent
            anchors.topMargin: 25

            // Input_drop_down {
            //     Layout.fillWidth: true
            //     label_text: 'Выберите меню'
            //     options: ['Меню 1', 'Меню 2', 'Меню 3']
            // }
            // Input_drop_down {
            //     label_text: 'Выберите номер дня меню, '
            //         + 'для которого хотите получить расчет'
            //     options: [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
            // }

            // Input_field {
            //     label_text: 'Введите возраст детей'
            // }
            // Input_field {
            //     label_text: 'Введите количество детей для расчета'
            // }
            Button {
                text: 'Рассчитать'
            }
        }


    }

}
