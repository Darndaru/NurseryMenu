import QtQuick 2.15
import QtQuick.Controls
import QtQuick.Layouts
import QtQuick.LocalStorage

RowLayout {
    property string label_text: 'label'
    property var options: []

    Label {
        id: label
        text: qsTr(label_text)
        font.pointSize: 12
    }

    ComboBox {
        model: options

    }
}
