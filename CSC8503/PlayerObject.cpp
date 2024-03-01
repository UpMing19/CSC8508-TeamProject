#include "TutorialGame.h"
#include "PlayerObject.h"
#include "Window.h"

using namespace NCL::CSC8503;

void PlayerObject::Update(float dt) {
    bool keyDown = false;
    switch (networkObject->GetNetworkID()) {
    case 1:
        if (!doing) {
            if (Window::GetKeyboard()->KeyDown(KeyCodes::UP) && renderObject->GetAnimationObject()->GetAnim2()) {
                if (renderObject->GetAnimationObject()->GetFlag2()) {
                    renderObject->GetAnimationObject()->SetActiveAnim(renderObject->GetAnimationObject()->GetAnim2());
                    renderObject->GetAnimationObject()->SetCurrentFrame(0);
                    renderObject->GetAnimationObject()->SetFrameTime(0.0f);
                    renderObject->GetAnimationObject()->UpdateFlags(2);
                }
            }
            else if (Window::GetKeyboard()->KeyDown(KeyCodes::RIGHT) && renderObject->GetAnimationObject()->GetAnim3()) {
                if (renderObject->GetAnimationObject()->GetFlag3()) {
                    renderObject->GetAnimationObject()->SetActiveAnim(renderObject->GetAnimationObject()->GetAnim3());
                    renderObject->GetAnimationObject()->SetCurrentFrame(0);
                    renderObject->GetAnimationObject()->SetFrameTime(0.0f);
                    renderObject->GetAnimationObject()->UpdateFlags(3);
                }
            }
            else if (Window::GetKeyboard()->KeyDown(KeyCodes::LEFT) && renderObject->GetAnimationObject()->GetAnim4()) {
                if (renderObject->GetAnimationObject()->GetFlag4()) {
                    renderObject->GetAnimationObject()->SetActiveAnim(renderObject->GetAnimationObject()->GetAnim4());
                    renderObject->GetAnimationObject()->SetCurrentFrame(0);
                    renderObject->GetAnimationObject()->SetFrameTime(0.0f);
                    renderObject->GetAnimationObject()->UpdateFlags(4);
                }
            }
            else if (Window::GetKeyboard()->KeyDown(KeyCodes::DOWN) && renderObject->GetAnimationObject()->GetAnim5()) {
                if (renderObject->GetAnimationObject()->GetFlag5()) {
                    renderObject->GetAnimationObject()->SetActiveAnim(renderObject->GetAnimationObject()->GetAnim5());
                    renderObject->GetAnimationObject()->SetCurrentFrame(0);
                    renderObject->GetAnimationObject()->SetFrameTime(0.0f);
                    renderObject->GetAnimationObject()->UpdateFlags(5);
                }
            }
            else if (Window::GetKeyboard()->KeyDown(KeyCodes::NUM3) && renderObject->GetAnimationObject()->GetAnim8()) {
                if (renderObject->GetAnimationObject()->GetFlag8()) {
                    renderObject->GetAnimationObject()->SetActiveAnim(renderObject->GetAnimationObject()->GetAnim8());
                    renderObject->GetAnimationObject()->SetCurrentFrame(0);
                    renderObject->GetAnimationObject()->SetFrameTime(0.0f);
                    renderObject->GetAnimationObject()->UpdateFlags(8);
                }
            }
            else {
                if (renderObject->GetAnimationObject()->GetFlag1()) {
                    renderObject->GetAnimationObject()->SetActiveAnim(renderObject->GetAnimationObject()->GetAnim1());
                    renderObject->GetAnimationObject()->SetCurrentFrame(0);
                    renderObject->GetAnimationObject()->SetFrameTime(0.0f);
                    renderObject->GetAnimationObject()->UpdateFlags(1);
                }
            }
        }
        break;
    case 2:
        if (!doing) {
            if (buttonStates[0] && renderObject->GetAnimationObject()->GetAnim2()) {
                if (renderObject->GetAnimationObject()->GetFlag2()) {
                    renderObject->GetAnimationObject()->SetActiveAnim(renderObject->GetAnimationObject()->GetAnim2());
                    renderObject->GetAnimationObject()->SetCurrentFrame(0);
                    renderObject->GetAnimationObject()->SetFrameTime(0.0f);
                    renderObject->GetAnimationObject()->UpdateFlags(2);
                }
            }
            else if (buttonStates[3] && renderObject->GetAnimationObject()->GetAnim3()) {
                if (renderObject->GetAnimationObject()->GetFlag3()) {
                    renderObject->GetAnimationObject()->SetActiveAnim(renderObject->GetAnimationObject()->GetAnim3());
                    renderObject->GetAnimationObject()->SetCurrentFrame(0);
                    renderObject->GetAnimationObject()->SetFrameTime(0.0f);
                    renderObject->GetAnimationObject()->UpdateFlags(3);
                }
            }
            else if (buttonStates[1] && renderObject->GetAnimationObject()->GetAnim4()) {
                if (renderObject->GetAnimationObject()->GetFlag4()) {
                    renderObject->GetAnimationObject()->SetActiveAnim(renderObject->GetAnimationObject()->GetAnim4());
                    renderObject->GetAnimationObject()->SetCurrentFrame(0);
                    renderObject->GetAnimationObject()->SetFrameTime(0.0f);
                    renderObject->GetAnimationObject()->UpdateFlags(4);
                }
            }
            else if (buttonStates[2] && renderObject->GetAnimationObject()->GetAnim5()) {
                if (renderObject->GetAnimationObject()->GetFlag5()) {
                    renderObject->GetAnimationObject()->SetActiveAnim(renderObject->GetAnimationObject()->GetAnim5());
                    renderObject->GetAnimationObject()->SetCurrentFrame(0);
                    renderObject->GetAnimationObject()->SetFrameTime(0.0f);
                    renderObject->GetAnimationObject()->UpdateFlags(5);
                }
            }
            else if (Window::GetKeyboard()->KeyDown(KeyCodes::NUM3) && renderObject->GetAnimationObject()->GetAnim8()) {
                if (renderObject->GetAnimationObject()->GetFlag8()) {
                    renderObject->GetAnimationObject()->SetActiveAnim(renderObject->GetAnimationObject()->GetAnim8());
                    renderObject->GetAnimationObject()->SetCurrentFrame(0);
                    renderObject->GetAnimationObject()->SetFrameTime(0.0f);
                    renderObject->GetAnimationObject()->UpdateFlags(8);
                }
            }
            else {
                if (renderObject->GetAnimationObject()->GetFlag1()) {
                    renderObject->GetAnimationObject()->SetActiveAnim(renderObject->GetAnimationObject()->GetAnim1());
                    renderObject->GetAnimationObject()->SetCurrentFrame(0);
                    renderObject->GetAnimationObject()->SetFrameTime(0.0f);
                    renderObject->GetAnimationObject()->UpdateFlags(1);
                }
            }
        }
        break;
    }
    if (doing) {
        if (cutting && renderObject->GetAnimationObject()->GetAnim6()) {
            if (renderObject->GetAnimationObject()->GetFlag6()) {
                renderObject->GetAnimationObject()->SetActiveAnim(renderObject->GetAnimationObject()->GetAnim6());
                renderObject->GetAnimationObject()->SetCurrentFrame(0);
                renderObject->GetAnimationObject()->SetFrameTime(0.0f);
                renderObject->GetAnimationObject()->UpdateFlags(6);
            }
        }
        else if (digging && renderObject->GetAnimationObject()->GetAnim7()) {
            if (renderObject->GetAnimationObject()->GetFlag7()) {
                renderObject->GetAnimationObject()->SetActiveAnim(renderObject->GetAnimationObject()->GetAnim7());
                renderObject->GetAnimationObject()->SetCurrentFrame(0);
                renderObject->GetAnimationObject()->SetFrameTime(0.0f);
                renderObject->GetAnimationObject()->UpdateFlags(7);
            }
        }
        else {
            if (renderObject->GetAnimationObject()->GetFlag1()) {
                renderObject->GetAnimationObject()->SetActiveAnim(renderObject->GetAnimationObject()->GetAnim1());
                renderObject->GetAnimationObject()->SetCurrentFrame(0);
                renderObject->GetAnimationObject()->SetFrameTime(0.0f);
                renderObject->GetAnimationObject()->UpdateFlags(1);
            }
        }
    }
    
    if (renderObject->GetAnimationObject()->GetActiveAnim() != renderObject->GetAnimationObject()->GetAnim1() ||
        renderObject->GetAnimationObject()->HasIdle()) {
        //if (!TutorialGame::GetGame()->IsNetworked())
            renderObject->GetAnimationObject()->SetFrameTime(renderObject->GetAnimationObject()->GetFrameTime() - dt);
        //else
            //renderObject->GetAnimationObject()->SetFrameTime(renderObject->GetAnimationObject()->GetFrameTime() - (dt / 4));
        while (renderObject->GetAnimationObject()->GetFrameTime() < 0.0f) {
            renderObject->GetAnimationObject()->SetCurrentFrame((renderObject->GetAnimationObject()->GetCurrentFrame() + 1) %
                renderObject->GetAnimationObject()->GetActiveAnim()->GetFrameCount());
            renderObject->GetAnimationObject()->SetFrameTime(renderObject->GetAnimationObject()->GetFrameTime() + 1.0f /
                renderObject->GetAnimationObject()->GetActiveAnim()->GetFrameRate());
        }
    }

    //if (Window::GetKeyboard()->KeyPressed(KeyCodes::E)) {
    //    renderObject->SetMesh(meshes[(index + 1) % 5]);
    //    renderObject->SetAnimationObject(animations[(index + 1) % 5]);
    //    renderObject->SetTextures(textures[(index + 1) % 5]);
    //    renderObject->SetBumpTextures(bumpTextures[(index + 1) % 5]);
    //    renderObject->SetShaderGroup(shaders[(index + 1) % 5]);
    //    index++;
    //}

    if (Window::GetKeyboard()->KeyPressed(KeyCodes::R)) {
        slot = 0;
        slotNum = 0;
    }

    PlayerMovement(dt);
    
    doing = false;
    cutting = false;
    digging = false;

    CutTree();
    DigRock();
    ScoopWater();
    UseWater();
    LoadMaterial();
}

void PlayerObject::OnCollisionBegin(GameObject* otherObject) {

}
static float a = 0;
void PlayerObject::PlayerMovement(float dt) {
    Quaternion* qq;
    //float yaw = Maths::RadiansToDegrees(atan2(-np.x, -np.z));
   // start->GetTransform().SetOrientation(qq->EulerAnglesToQuaternion(0, yaw, 0));
    switch (networkObject->GetNetworkID()) {
    case 1:
        if (Window::GetKeyboard()->KeyHeld(NCL::KeyCodes::UP)) {
            face = Vector3(0, 0, -1);
            physicsObject->SetRealDamping(0.962f);
            physicsObject->AddForceAtPosition(face * speed, transform.GetPosition());
            transform.SetOrientation(qq->EulerAnglesToQuaternion(0, 0, 0));
        }
        else if (Window::GetKeyboard()->KeyHeld(NCL::KeyCodes::LEFT)) {
            face = Vector3(-1, 0, 0);
            physicsObject->SetRealDamping(0.962f);
            physicsObject->AddForceAtPosition(face * speed, transform.GetPosition());
            transform.SetOrientation(qq->EulerAnglesToQuaternion(0, 90, 0));
        }
        else if (Window::GetKeyboard()->KeyHeld(NCL::KeyCodes::DOWN)) {
            face = Vector3(0, 0, 1);
            physicsObject->SetRealDamping(0.962f);
            physicsObject->AddForceAtPosition(face * speed, transform.GetPosition());
            transform.SetOrientation(qq->EulerAnglesToQuaternion(0, 180, 0));
        }
        else if (Window::GetKeyboard()->KeyHeld(NCL::KeyCodes::RIGHT)) {
            face = Vector3(1, 0, 0);
            physicsObject->SetRealDamping(0.962f);
            physicsObject->AddForceAtPosition(face * speed, transform.GetPosition());
            transform.SetOrientation(qq->EulerAnglesToQuaternion(0, -90, 0));
        }
        else {
            physicsObject->SetRealDamping(0.858f);
        }
        //std::cout << "Player: " << transform.GetPosition().x << " " << transform.GetPosition().y << " " << transform.GetPosition().z << std::endl;
        break;
    case 2:
        if (buttonStates[0]) {
            face = Vector3(0, 0, -1);
            physicsObject->SetRealDamping(0.962f);
            physicsObject->AddForceAtPosition(face * speed, transform.GetPosition());
            transform.SetOrientation(qq->EulerAnglesToQuaternion(0, 0, 0));
        }
        else if (buttonStates[2]) {
            face = Vector3(-1, 0, 0);
            physicsObject->SetRealDamping(0.962f);
            physicsObject->AddForceAtPosition(face * speed, transform.GetPosition());
            transform.SetOrientation(qq->EulerAnglesToQuaternion(0, 90, 0));
        }
        else if (buttonStates[1]) {
            face = Vector3(0, 0, 1);
            physicsObject->SetRealDamping(0.962f);
            physicsObject->AddForceAtPosition(face * speed, transform.GetPosition());
            transform.SetOrientation(qq->EulerAnglesToQuaternion(0, 180, 0));
        }
        else if (buttonStates[3]) {
            face = Vector3(1, 0, 0);
            physicsObject->SetRealDamping(0.962f);
            physicsObject->AddForceAtPosition(face * speed, transform.GetPosition());
            transform.SetOrientation(qq->EulerAnglesToQuaternion(0, -90, 0));
        }
        else {
            physicsObject->SetRealDamping(0.858f);
        }
        //std::cout << "Player2: " << transform.GetPosition().x << " " << transform.GetPosition().y << " " << transform.GetPosition().z << std::endl;
        break;
    }
    //else {
    //   // physicsObject->SetLinearVelocity(Vector3(0, 0, 0));
    //}
    //a += dt;
    //if (a >= 1.0f) {
    //    std::cout << "The force is: " << physicsObject->GetLinearVelocity().x << " " << physicsObject->GetLinearVelocity().y << " " << physicsObject->GetLinearVelocity().z << std::endl;
    //    a = 0;
    //}
    //std::cout << "Player: " << transform.GetPosition().x << " " << transform.GetPosition().y << " " << transform.GetPosition().z << std::endl;
}

void PlayerObject::CutTree() {
    if (Window::GetKeyboard()->KeyHeld(NCL::KeyCodes::F) && slot == 3) {
        doing = true;
        cutting = true;
        Debug::DrawLine(transform.GetPosition(), transform.GetPosition() + face * 5.0f, Vector4(8, 5, 0, 8));
        Ray r = Ray(transform.GetPosition(), face);
        RayCollision closestCollision;
        if (TutorialGame::GetGame()->GetWorld()->Raycast(r, closestCollision, true, this)) {
            GameObject* closest = (GameObject*)closestCollision.node;
            if (closest->GetTypeID() == 10086 && closestCollision.rayDistance < 5.0f) {
                //std::cout << "yes" << "\n";
                closest->GetTransform().SetScale(closest->GetTransform().GetScale() - Vector3(0.05, 0.05, 0.05));
                if (closest->GetTransform().GetScale().x < 0.1f) {
                    TutorialGame::GetGame()->AddPlankToWorld(Vector3(closest->GetTransform().GetPosition().x, 5, closest->GetTransform().GetPosition().z));
                    TutorialGame::GetGame()->GetWorld()->RemoveGameObject(closest, false);
                }
            }
        }
    }
}

void PlayerObject::DigRock() {
    if (Window::GetKeyboard()->KeyHeld(NCL::KeyCodes::F) && slot == 2) {
        doing = true;
        digging = true;
        Debug::DrawLine(transform.GetPosition(), transform.GetPosition() + face * 5.0f, Vector4(8, 5, 0, 8));
        Ray r = Ray(transform.GetPosition(), face);
        RayCollision closestCollision;
        if (TutorialGame::GetGame()->GetWorld()->Raycast(r, closestCollision, true, this)) {
            GameObject* closest = (GameObject*)closestCollision.node;
            if (closest->GetTypeID() == 10010 && closestCollision.rayDistance < 5.0f) {
                //std::cout << "yes" << "\n";
                closest->GetTransform().SetScale(closest->GetTransform().GetScale() - Vector3(0.05, 0.05, 0.05));
                if (closest->GetTransform().GetScale().x < 0.1f) {
                    TutorialGame::GetGame()->AddStoneToWorld(Vector3(closest->GetTransform().GetPosition().x, 5, closest->GetTransform().GetPosition().z));
                    TutorialGame::GetGame()->GetWorld()->RemoveGameObject(closest, false);
                }
            }
        }
    }
}

void PlayerObject::ScoopWater() {
    if (Window::GetKeyboard()->KeyHeld(NCL::KeyCodes::F) && slot == 4) {
        doing = true;
        Debug::DrawLine(transform.GetPosition(), transform.GetPosition() + face * 5.0f, Vector4(8, 5, 0, 8));
        Ray r = Ray(transform.GetPosition(), face);
        RayCollision closestCollision;
        if (TutorialGame::GetGame()->GetWorld()->Raycast(r, closestCollision, true, this)) {
            GameObject* closest = (GameObject*)closestCollision.node;
            if (closest->GetTypeID() == 10000 && closestCollision.rayDistance < 5.0f) {
                std::cout << "yes" << "\n";
                bucket->GetRenderObject()->SetColour(Vector4(0, 0, 1, 1));
                bucket->SetWater(true);
            }
        }
    }
}

void PlayerObject::UseWater() {
    if (Window::GetKeyboard()->KeyHeld(NCL::KeyCodes::F) && slot == 4) {
        doing = true;
        Debug::DrawLine(transform.GetPosition(), transform.GetPosition() + face * 5.0f, Vector4(8, 5, 0, 8));
        Ray r = Ray(transform.GetPosition(), face);
        RayCollision closestCollision;
        if (TutorialGame::GetGame()->GetWorld()->Raycast(r, closestCollision, true, this)) {
            GameObject* closest = (GameObject*)closestCollision.node;
            if (closest->GetTypeID() == 23 && closestCollision.rayDistance < 5.0f&&bucket->GetWater()==true) {
                WaterCarriage* watercarriage = (WaterCarriage*)closest;
                watercarriage->SetCarriageWater(100.0f);
                bucket->SetWater(false);
                bucket->GetRenderObject()->SetColour(Vector4(0, 0, 0, 1));
            }
        }
    }
}

void PlayerObject::LoadMaterial() {
    if (Window::GetKeyboard()->KeyPressed(NCL::KeyCodes::Y)) {
        if (slot == 5 || slot == 6) {
            Debug::DrawLine(transform.GetPosition(), transform.GetPosition() + face * 5.0f, Vector4(8, 5, 0, 8));
            Ray r = Ray(transform.GetPosition(), face);
            RayCollision closestCollision;
            if (TutorialGame::GetGame()->GetWorld()->Raycast(r, closestCollision, true, this)) {
                GameObject* closest = (GameObject*)closestCollision.node;
                if (closest->GetTypeID() == 21 && closestCollision.rayDistance < 5.0f) {
                    //(std::cout << "yes" << "\n";
                    carriage = (MaterialCarriage*)closest;
                }
            }
        }
    }
}
