import QtQuick 2.3
import QtQuick.Window 2.2
import weiqian.lasermark 1.0

Window {
    visible: true

    QuickObjectFactory {
        id : objFactory
    }

    MouseArea {
        anchors.fill: parent
        onClicked: {
            var obj = objFactory.queryQuickObject()
            textItem.text = obj.name
        }
    }

    Text {
        id: textItem
        text: qsTr("Hello World")
        anchors.centerIn: parent
    }
}

