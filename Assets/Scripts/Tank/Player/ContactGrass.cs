using Data;
using UnityEngine;

namespace Tank.Player
{
    public class ContactGrass : MonoBehaviour
    {
        private readonly Color _semiTransparent = new(1, 1, 1, 0.25f);
        private readonly Color _defaultColor = Color.white;
        private Material _onEnterMaterial;
        private Material _onExitMaterial;
        private static readonly int ColorProperty = Shader.PropertyToID("_Color");

        private void OnTriggerEnter(Collider other)
        {
            if (!other.CompareTag(GameCommonData.GrassTag))
            {
                return;
            }

            _onEnterMaterial = other.GetComponent<Renderer>().material;
            _onEnterMaterial.SetColor(ColorProperty, _semiTransparent);
        }

        private void OnTriggerExit(Collider other)
        {
            if (!other.CompareTag(GameCommonData.GrassTag))
            {
                return;
            }

            _onExitMaterial = other.GetComponent<Renderer>().material;
            _onExitMaterial.SetColor(ColorProperty, _defaultColor);
        }

        private void OnDestroy()
        {
            if (_onEnterMaterial != null)
            {
                Destroy(_onEnterMaterial);
                _onEnterMaterial = null;
            }

            if (_onExitMaterial != null)
            {
                Destroy(_onExitMaterial);
                _onExitMaterial = null;
            }
        }
    }
}