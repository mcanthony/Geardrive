/*
 * Geardrive - Sega Mega Drive / Genesis Emulator
 * Copyright (C) 2014  Ignacio Sanchez Gines

 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * any later version.

 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see http://www.gnu.org/licenses/ 
 * 
 */

#ifndef GD_GLFRAME_H_
#define GD_GLFRAME_H_

#ifndef __APPLE__
    #include <GL/glew.h>
#endif
#include <QGLWidget>
#include "../../src/geardrive.h"
#include "render_thread.h"

class Emulator;

class GLFrame : public QGLWidget
{
    Q_OBJECT

public:
    explicit GLFrame(QWidget *parent = 0);
    ~GLFrame();
    void InitRenderThread(Emulator* emulator);
    void StopRenderThread();
    void PauseRenderThread();
    void ResumeRenderThread();
    bool IsRunningRenderThread();
    void SetBilinearFiletering(bool enabled);

protected:
    void closeEvent(QCloseEvent *evt);
    void resizeEvent(QResizeEvent *evt);
    void paintEvent(QPaintEvent *);

private:
    RenderThread render_thread_;
};

#endif // GD_GLFRAME_H_
