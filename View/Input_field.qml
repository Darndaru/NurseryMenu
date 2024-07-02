import QtQuick
import QtQuick.Controls
import QtQuick.Layouts
import QtQuick.LocalStorage

RowLayout {
    property string label_text: 'label'

    Label {
        id: label
        text: qsTr(label_text)
        font.pointSize: 12
    }

    TextField {
        id: field
        font.pointSize: 12
    }
}
