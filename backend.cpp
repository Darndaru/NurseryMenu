#include "backend.h"

Backend::Backend() { }

QString Backend::generateMenu() {
    emit menuGenerated();
    return "menu generated";
}
